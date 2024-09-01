import requests

# URL of your Flask server endpoint for adding users
url = 'http://172.16.129.18/add_user'

# User data to be sent in the request body
user_data = {
    'firstName': 'John',
    'lastName': 'Doe',
    'username': 'johndoe',
    'password': 'password123'
}

# Send POST request to add user
response = requests.post(url, json=user_data)

# Check the response
if response.status_code == 200:
    print("User added successfully!")
else:
    print("Failed to add user. Error:", response.text)