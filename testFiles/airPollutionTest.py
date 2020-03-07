import json

import requests

url = "http://api.airvisual.com/v2/countries?key=d3d2e390-b9b3-4482-a2aa-52278709287f"

#make the call with the url 
payload = {}
files = {}
headers= {}
response = requests.request("GET", url, headers=headers, data = payload, files = files)


data = response.json()

#prints out all the countries
for p in data['data']:
	print("Country: " + p['country'] + "\n");

#make the call with the url to query all valid cities in NH

url2 = "http://api.airvisual.com/v2/cities?state=New Hampshire&country=USA&key=d3d2e390-b9b3-4482-a2aa-52278709287f"
payload2 = {}
files2 = {}
headers2= {}
response2 = requests.request("GET", url2, headers=headers, data = payload, files = files)
data2 = response2.json()
for p in data2['data']:
	print("City: " + p['city'] + "\n");
