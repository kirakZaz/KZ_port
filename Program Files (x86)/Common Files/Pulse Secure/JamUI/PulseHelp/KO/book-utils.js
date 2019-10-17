var expand = true;

function toogleTree(){
	if(!expand){
		collapseTree();
		expand = true;
	}else{
		expandTree();
		expand = false;
	}
	return;
}

function toogleView(){
	if(top.document.getElementById('content').cols == '0,*'){
		top.document.getElementById('content').cols = "320,*";
	}else{
		top.document.getElementById('content').cols = "0,*";
	}
	return;
}

function tooglebookView(){
	if(top.document.getElementById('content').cols == '0,*'){
		top.document.getElementById('content').cols = "320,*";
		top.main.document.getElementById('jhidenav').style.display = 'inline';
		top.main.document.getElementById('jshownav').style.display = 'none';
	}else{
		top.document.getElementById('content').cols = "0,*";
		top.main.document.getElementById('jshownav').style.display = 'inline';
		top.main.document.getElementById('jhidenav').style.display = 'none';
	}
	return;
}

function setHTMLHeight(){

	var vpHeight = 'auto';

	if (self.innerHeight) { // all except Explorer
		vpHeight = self.innerHeight;
	}
	else if (top.main.document.documentElement && top.main.document.documentElement.clientHeight && top.main.document.body.clientHeight) { // IE6 Strict
		
		if(top.main.document.body.clientHeight < top.main.document.documentElement.clientHeight)
		{
			vpHeight = top.main.document.documentElement.clientHeight;
		}else{
			vpHeight = top.main.document.body.clientHeight;
		}
		
	}

	if(top.main.document.getElementsByTagName("html")[0] != null){
		top.main.document.getElementsByTagName("html")[0].style.height=vpHeight;
	}
}

function expandTree(){
	var divs = top.tocframe.document.getElementById('j_left_toc').getElementsByTagName('*');
    	var size = divs.length;
    	var divNode;
    	var id;

	for (var i = 0; i < size; i++) {
		divNode = divs[i];
		id = divs[i].id;
		if(id != "" & divNode.nodeName == 'DIV'){
			top.tocframe.document.getElementById(id).style.display = 'block';
			plusid = "plus" + id;
			minusid = "minus" + id;
			if(top.tocframe.document.getElementById(plusid)!=null){
				top.tocframe.document.getElementById(plusid).style.display = 'none';
			}
			if(top.tocframe.document.getElementById(minusid) != null){
				top.tocframe.document.getElementById(minusid).style.display = 'inline';
			}			
		}
	}
	return;
}

function collapseTree(){
	var divs = top.tocframe.document.getElementById('j_root_toc_list').getElementsByTagName('*');
    	var size = divs.length;
    	var divNode;
    	var id;

	for (var i = 0; i < size; i++) {
		divNode = divs[i];
		id = divs[i].id;
		if(id != "" & divNode.nodeName == 'DIV'){
			top.tocframe.document.getElementById(id).style.display = 'none';
			plusid = "plus" + id;
			minusid = "minus" + id;
			if(top.tocframe.document.getElementById(plusid)!=null){
				top.tocframe.document.getElementById(plusid).style.display = 'inline';
			}
			if(top.tocframe.document.getElementById(minusid) != null){
				top.tocframe.document.getElementById(minusid).style.display = 'none';
			}			
		}
	}
	return;
}

function updateTree(){
	if(top.frames.length == 0){
		return;
	}
	if(top.tocframe.document.getElementById('j_left_toc') != null){
		if(top.tocframe.document.getElementById('j_left_toc').style.display == 'none'){
			return;
		}
	}

	var url = top.main.location.href;
	var file = url.substring(url.lastIndexOf('/')+1);
	var filename;
	if(file.lastIndexOf('#')>0){
		filename = file.substring(0, file.lastIndexOf('#'));
	}else{
		filename = file;
	}

	var anchors = top.tocframe.document.getElementById('j_left_toc').getElementsByTagName("a");
    	var size = anchors.length;
    	var anchorNode;
    	var fileinlist;
    	var filenameinlist;
    	
	for (var i = 0; i < size; i++) {
		fileinlist = anchors[i].href.substring(url.lastIndexOf('/')+1);
		if(fileinlist.lastIndexOf('#')>0){
			filenameinlist = fileinlist.substring(0, fileinlist.lastIndexOf('#'));
		}else{
			filenameinlist = fileinlist;
		}
		if(filenameinlist == filename){
			anchorNode = anchors[i];
			break;
		}
	}
	for (var j = 0; j < size; j++) {
		anchors[j].style.backgroundColor = "#ffffff";
	}
	if(anchorNode != null){
		var parent = anchorNode.parentNode;
		while(parent != top.tocframe.document.getElementById('j_left_toc')){
			var id = parent.id;
			if(id == "j_root_toc_list"){
				//Do nothing
			}else if(id != ""){
				if(top.tocframe.document.getElementById(id).style.display == "none"){
					showSubList(id);
					showSubList("plus" + id);
					showSubList("minus" + id);
				}
			}
			parent = parent.parentNode;
		}
		anchorNode.style.backgroundColor = "#bbbbbb";
	}
	return;
}

function showSubList(id) {

	if (top.tocframe.document.getElementById) { // DOM3 = IE5, NS6
		if (top.tocframe.document.getElementById(id).style.display == "none"){
			top.tocframe.document.getElementById(id).style.display = 'inline';
		} else {
			top.tocframe.document.getElementById(id).style.display = 'none';
		}
	} else {
		if (top.tocframe.document.layers) {
			if (top.tocframe.document.id.display == "none"){
				top.tocframe.document.id.display = 'block';
			} else {
				top.tocframe.document.id.display = 'none';
			}
		} else {
			if (top.tocframe.document.all.id.style.visibility == "none"){
				top.tocframe.document.all.id.style.display = 'block';
			} else {
				top.tocframe.document.all.id.style.display = 'none';
			}
		}
	}
}

function showBookView(id) {
	if(id == "j_left_toc"){
		document.getElementById(id).style.display = 'block';
		document.getElementById('j_left_index').style.display = 'none';
		document.getElementById('link-toc').className = 'here';
		document.getElementById('link-index').className = 'none';
		updateTree();
	}
	if(id == "j_left_index"){
		document.getElementById(id).style.display = 'block';
		document.getElementById('j_left_toc').style.display = 'none';
		document.getElementById('link-index').className = 'here';
		document.getElementById('link-toc').className = 'none';
	}
}