import json

import requests

url = "http://api.airvisual.com/v2/countries?key=d3d2e390-b9b3-4482-a2aa-52278709287f"

payload = {}
files = {}
headers= {}

response = requests.request("GET", url, headers=headers, data = payload, files = files)

print(response.text.encode('utf8'))