# Initialization
cd `dirname $0`
SCRIPTDIR=`pwd`
cd -

rm -rf $SCRIPTDIR/../doc/
mkdir -p $SCRIPTDIR/../doc/

# Run doxygen
cd $SCRIPTDIR
doxygen Doxyfile
cd -

# Open documentation
open "$SCRIPTDIR/../doc/html/index.html" > /dev/null 2>&1 &