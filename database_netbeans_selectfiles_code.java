import java.sql.Connection;//connects with slq and java
import java.sql.DriverManager;//links with drive manager and java
import java.sql.ResultSet;//receives the resutls from java and send it to database to store the value
import java.sql.SQLException;//catch--exception error correction
import java.sql.Statement;//basic statment syntax

public class NewClass1 {

    public static void main(String args[]){


String connectionURL = "jdbc:derby://localhost:1527/FIRST";//drive location to store the values
//ConnectionURL, username and password should be specified in getConnection()
try {
Connection conn = DriverManager.getConnection(connectionURL, "saravanan", "root");//database username and password

String sql = "SELECT * FROM STUDENT";
Statement st = conn.createStatement();
ResultSet rs=null;
rs=st.executeQuery(sql);
while(rs.next()){
System.out.println(rs.getString("Name")+"\t"+rs.getInt("Roll_no"));
}
rs.close();