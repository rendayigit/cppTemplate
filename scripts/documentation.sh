# Initialization
cd `dirname $0`
SCRIPTDIR=`pwd`
cd -

rm -rf $SCRIPTDIR/../documentation/
mkdir -p $SCRIPTDIR/../documentation/

# Run doxygen
cd $SCRIPTDIR
doxygen Doxyfile
cd -

# Open documentation
open "$SCRIPTDIR/../documentation/html/index.html" > /dev/null 2>&1 &