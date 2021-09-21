#!/bin/bash

username="vkovalchuk-smith"
output_image_name="output_image"

access_token=`curl --data "username=$username&password=secret" http://localhost:8000/auth | awk -F\" '{print $4}'`

curl -H "Authorization: Bearer $access_token" -X GET "http://localhost:8000/image" --output $output_image_name.png