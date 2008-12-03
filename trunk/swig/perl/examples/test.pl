use SwigStarterKit;

$var = new SwigStarterKit::Script_Interface();

print $var->get_a_value() . "\n";

$vec = new SwigStarterKit::String_Vector();
$vec->push("Hello");
$vec->push("World");

print $vec->get(0) . "\n";

$newvec = new SwigStarterKit::String_Vector();

$newvec->push("z");
$newvec->push("q");
$newvec->push("a");
$newvec->push("t");

SwigStarterKit::String_Vector_Sort($newvec);

for ($i = 0; $i < $newvec->size(); ++$i) {
  print $newvec->get($i) . "\n";
}

