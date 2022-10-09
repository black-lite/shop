$(document).ready(function () {
	window.ajaxInterface = new xhrInterface();
})

class xhrInterface {
	constructor() {
		this.xhr = new XMLHttpRequest();
	}

	inoutMessages(response)
	{
		console.log(response);
	}

	onError(error) { console.log(error); }

	get(url)
	{
		$.ajax({
			url: 'html/'.url,
			type: 'GET',
			dataType: 'json',
			error: (error) => this.onError(error),
			success: (response) => this.inoutMessages(response),
		})

	}

	post(url, postData)
	{
		$.ajax(url)
		{

		}
	}
}
