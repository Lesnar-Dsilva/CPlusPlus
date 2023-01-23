#define CURL_STATICLIB
#include <iostream>
#include <string>
#include "curl.h"
size_t my_write(void *ptr, size_t size, size_t nmemb,std::string *result) {
	result->append(static_cast<char*>(ptr), size * nmemb);
	return size * nmemb;
}
int main()
{	
	
	CURL* curl;
	CURLcode res;
	curl = curl_easy_init();
	std::string result;
	std::string s;//source currency
	std::string c;//currency converted to
	float cr;//conversion rate
	float is;//input source amount
	float sc;//source converted to currency amount
	std::string input;

	while (input != "-1") {
		std::cout << "START? (type EXIT to exit program) OR (type LIST for a list of all the countries we can convert to)> ";
		std::cin >> input;
		if (input == "EXIT" || input == "exit") { break; }
		else if (input == "LIST" || input == "list") {
			curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
			curl_easy_setopt(curl, CURLOPT_URL, "https://api.apilayer.com/currency_data/list");
			curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
			curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, "https");
			struct curl_slist* headers = NULL;
			headers = curl_slist_append(headers, "apikey: X38Q1y6RsrSum7HekduCkpA8Dc7gZ1RW");
			curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

			res = curl_easy_perform(curl);
		}
		else {
			std::cout << "Source currency> ";
			std::cin >> s;
			std::cout << "Convert to currency> ";
			std::cin >> c;

			if (curl) {
				curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
				curl_easy_setopt(curl, CURLOPT_URL, ("https://api.apilayer.com/currency_data/live?source=" + s + "&currencies=" + c).c_str());
				struct curl_slist* headers = NULL;
				headers = curl_slist_append(headers, "apikey: X38Q1y6RsrSum7HekduCkpA8Dc7gZ1RW");
				curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
				curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, my_write);
				curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);
				res = curl_easy_perform(curl);

			}
			cr = stof(result.substr(result.find(".") - 1));
			std::cout << "Conversion rate: " << cr << '\n';

			std::cout << "How much would you like to convert?> ";
			std::cin >> is;

			sc = is * cr;
			std::cout << "Converted: " << sc << " " << c << '\n';
		}
	}
	std::cout << '\n' << "Good bye!"<<'\n';
	curl_easy_cleanup(curl);
}
