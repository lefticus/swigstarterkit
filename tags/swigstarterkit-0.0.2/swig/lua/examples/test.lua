print(m_scripting_interface:get_a_value());
print(m_scripting_interface.get_a_value);
print(m_scripting_interface.add_script_response);

m_scripting_interface:add_script_response("Hello");
m_scripting_interface:add_script_response("World");

var = SwigStarterKit.String_Vector();

var:push_back("z");
var:push_back("a");
var:push_back("q");
var:push_back("p");
var:push_back("t");

SwigStarterKit.String_Vector_Sort(var);

for i=0,var:size()-1 do
  print(var[i]);
end
