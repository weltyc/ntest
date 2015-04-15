Analysis Tools
==============

draws.sh
--------

`draws.sh` provides a complete draw tree for ntest's 30-ply book ("s30").
Each path through the tree ends with the first solved position, if there is one, or the last unsolved position.

Initial Setup:

    cd /path/to/ntest
	cp /path/to/analysis/* .

After initial setup, to extract the draw tree:

    cd /path/to/ntest
	source draws.sh

Output:

`draws.txt`: A list of all drawn lines from the start position
to stdout: statistics on the drawn lines.

drawAnalysis.sh
---------------

Prints statistics about the draw tree leaves. This is run as the final step of `draws.sh`.

DrawTree.groovy
---------------

Displays a graphical draw tree using the contens of `draws.txt`.