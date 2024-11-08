Graph *graph; // Already seeded with Edges
ES *vnames = new ES(100); // Create ES to collect Vertex Name strings
string startVname = “A”;
es = getVerticies (graph, startVnName, vnames); // Recursively fills vnames

ES* getVerticies (Graph *graph, const stsring &vName, ES* es)
{ // Return Depth First collection of all Graph’s Vertex Names, starting with vName

  //Add vName to ES collection of Vertices
  es->append(vName);
  //Use Graph:: getVerEdges() to get EA edge collection for vName (all edges from it)
  vEdgeBag *currBag = graph->getVerEdges(vname, TO);
  for (size_t ea_idx = 0;
   	ea_idx < currBag->getSize();
   	++ea_idx)  { //start for
	//when an `<ea is returned...
	EA* curr_EA = currBag[ea_idx];
	for (size_t edge_idx = 0;
     edge_idx < curr_EA.getNum();
     edge_idx++) { //start for

  	//Get “GoTo” Vertex string (gtov)
  	Edge* curr_edge = curr_EA[edge_idx];
  	//If (gtov not already in in ES collection)
  	//Even though ES does not have a find functionality, I will assume we have a function
  	//find in the ES class since the assignment is to only write the getVertices function
  	if (!es->find(current_edge->eVxn)) {
    es->insert(current_edge->eVxn);
    //...Recursively Call getVerticies
    getVertices(graph, current_edge->eVxn, es);
  	}


	}// end for
	//For (each Edge returned)

  } //end for
  //Return ES
return es;
}


