function showHelpView(id) {
	if(id == "j_left_toc"){
		document.getElementById(id).style.display = 'block';
		if(document.getElementById('j_left_index'))
			document.getElementById('j_left_index').style.display = 'none';
		document.getElementById('j_left_search').style.display = 'none';
		document.getElementById('link-toc').className = 'here';
		if(document.getElementById('link_index'))
			document.getElementById('link-index').className = 'none';
		document.getElementById('link-search').className = 'none';
		updateTree();
	}
	if(id == "j_left_index"){
		document.getElementById(id).style.display = 'block';
		document.getElementById('j_left_toc').style.display = 'none';
		document.getElementById('j_left_search').style.display = 'none';
		document.getElementById('link-index').className = 'here';
		document.getElementById('link-toc').className = 'none';
		document.getElementById('link-search').className = 'none';		
	}
	if(id == "j_left_search"){
		document.getElementById(id).style.display = 'block';
		document.getElementById('j_left_toc').style.display = 'none';
		if(document.getElementById('j_left_index'))
			document.getElementById('j_left_index').style.display = 'none';
		document.getElementById('link-search').className = 'here';
		document.getElementById('link-toc').className = 'none';
		if(document.getElementById('link_index'))
			document.getElementById('link-index').className = 'none';		
		document.getElementById('searchdata1').focus();
		window.addEventListener('keydown', keyPressCallback, false);
	}
}

function keyPressCallback(e){
	if(e.keyCode == 13){
		findNew('No results found');
	}
}

function findNew(message){
	var searchResults = [];
	var r = 0;
	var string = '';
	var index;
	var results = '<div>';
        searchstring = document.getElementById('searchdata1').value;
        searchArr = searchstring.split(" ");
        
        for(var sindex=0; sindex < searchArr.length;sindex++){
		searchword = searchArr[sindex].toString();

		for(var i=0;i<searchIndex.length;i++){
			string = searchIndex[i][2].toString();
			if(string.toLowerCase().indexOf(searchword.toLowerCase()) >= 0){
			    searchResults[r] = i;
			    r++;
			}
		}
	}
	var uniqueSearchResults = unique(searchResults);

	if(uniqueSearchResults.length > 0)
	{
		for(var j=0;j<uniqueSearchResults.length;j++){
		    index = uniqueSearchResults[j];
		    link = searchIndex[index][0];
		    linkText = searchIndex[index][1];
		    results += '<div><a target="main" href="' +  link + '">' + linkText + '</a></div>';
		}
	}else{
		results += message;
	}
	results += '</div>';
	document.getElementById('sresults').innerHTML = results;

}

function unique(a)
{
   var r = new Array();
   o:for(var i = 0, n = a.length; i < n; i++)
   {
      for(var x = 0, y = r.length; x < y; x++)
      {
         if(r[x]==a[i]) continue o;
      }
      r[r.length] = a[i];
   }
   return r;
}

function highlightResults() {
	var searchString = getSearchString();
	if(searchString != ""){
		var textContainerNode = document.getElementById("content");

		var searchTerms = searchString.split('|');

		for (var i in searchTerms)  {
		// The regex is the secret, it prevents text within tag declarations to be affected
			var regex = new RegExp(">([^<]*)?("+searchTerms[i]+")([^>]*)?<","ig");
			highlightResultNodes(textContainerNode, regex);
		}
	}

}

function getSearchString() {
	var searchString = parent.tocframe.document.getElementById("searchdata1").value;
	if(searchString != ""){
		return searchString.replace(/\%20|\+/g,"\|");
	}else{
		return "";
	}
}

function highlightResultNodes(element, regex) {
	var tempinnerHTML = element.innerHTML;
	element.innerHTML = tempinnerHTML.replace(regex,'>$1<span class="highlighted">$2</span>$3<');
}