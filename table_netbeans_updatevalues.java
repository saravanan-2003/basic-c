import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
public class NewClass2 {
    public static void main(String args[]){


String connectionURL = "jdbc:derby://localhost:1527/FIRST";
//ConnectionURL, username and password should be specified in getConnection()
try {
Connection conn = DriverManager.getConnection(connectionURL, "saravanan", "root");

String sql = "UPDATE saravanan.STUDENT  SET NAME='ramesh' WHERE ROLL_NO=201";
Statement st = conn.createStatement();
st.executeUpdate(sql);
st.close();
conn.close();
} catch (SQLException ex) {
System.out.println("Connect failed ! ");
}}}