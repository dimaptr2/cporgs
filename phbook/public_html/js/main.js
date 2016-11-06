// Create an employee data
function createEmployee() {

    var form = document.getElementById("main-area");
    var br1 = document.createElement('br');
    var br2 = document.createElement('br');
    var br3 = document.createElement('br');

    form.setAttribute('method', 'POST');
    form.setAttribute('action', '/createEmployee');

    form.innerHTML = "Create an employee master data:<br>";
    var firstName = document.createElement('input');
    firstName.setAttribute('type', 'text');
    firstName.setAttribute('id', 'first-name');
    firstName.setAttribute('placeholder', 'First name');

    var lastName = document.createElement('input');
    lastName.setAttribute('type', 'text');
    lastName.setAttribute('id', 'last-name');
    lastName.setAttribute('placeholder', 'Last name');

    var phoneNumber = document.createElement('input');
    phoneNumber.setAttribute('type', 'text');
    phoneNumber.setAttribute('id', 'phone-number');
    phoneNumber.setAttribute('placeholder', 'Phone number');

//    var middleName = document.createElement('input');
//    middleName.setAttribute('type', 'text');
//    middleName.setAttribute('id', 'middle-name');
//    middleName.setAttribute('placeholder', 'Middle name');

    var btnSubmit = document.createElement('input');
    btnSubmit.setAttribute('type', 'submit');
    btnSubmit.setAttribute('id', 'create-employee');
    btnSubmit.setAttribute('value', 'Submit');
    btnSubmit.setAttribute('class', 'submit-button1')

    form.appendChild(firstName);
    form.appendChild(br1);
    form.appendChild(lastName);
    form.appendChild(br2);
    form.appendChild(phoneNumber);
    form.appendChild(br3);
    form.appendChild(btnSubmit);

}