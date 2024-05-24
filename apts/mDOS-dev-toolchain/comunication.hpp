std::string get_from_buffer()
{
	int bytesReceived = recv(clientSocket, buffer, sizeof(buffer), 0);
	if (bytesReceived > 0)
	{
		buffer[bytesReceived] = '\0';
		return buffer;
	}
}

std::string comunicate_with_mDOS(std::string msg)
{
	message = msg.c_str();
	send(clientSocket, message, strlen(message), 0);
	std::string output = get_from_buffer();
	return output;
}

std::string get_from_mDOS(std::string input, std::string next_message)
{
	int msg_1_length = input.length();
	int msg_2_length = next_message.length();
	std::string output;
	
	if (msg_1_length < 1024 and msg_2_length < 1024)
	{
		message = input.c_str();
		send(clientSocket, message, strlen(message), 0);
		
		output = get_from_buffer();
		
		if (next_message != "")
		{
			if (output == "recived")
			{
				output = comunicate_with_mDOS(next_message);
			}
		}
	}
	else
	{
		output = "<mDOS API>: MESSAGES ARE TOO LONG";
	}
	next_message.erase();
	return output;
}
