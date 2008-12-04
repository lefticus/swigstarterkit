use swigstarterkit;

$var = new swigstarterkit::Script_Interface();

print $var->get_a_value() . "\n";

$vec = new swigstarterkit::String_Vector();
$vec->push("Hello");
$vec->push("World");

print $vec->get(0) . "\n";

$newvec = new swigstarterkit::String_Vector();

$newvec->push("z");
$newvec->push("q");
$newvec->push("a");
$newvec->push("t");

swigstarterkit::String_Vector_Sort($newvec);

for ($i = 0; $i < $newvec->size(); ++$i) {
  print $newvec->get($i) . "\n";
}

