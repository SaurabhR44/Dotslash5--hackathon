document.addEventListener("DOMContentLoaded", () => {
    const loginForm = document.querySelector("#login");
    const createAccountForm = document.querySelector("#createAccount");
    document.querySelector("#linkCreateAccount").addEventListener("click", e => {
        e.preventDefault();
        loginForm.classList.add("form--hidden");
        createAccountForm.classList.remove("form--hidden");
    })
    document.querySelector("#linkLogin").addEventListener("click", e => {
        loginForm.classList.remove("form--hidden");
        createAccountForm.classList.add("form--hidden");
    })
})

function setFormMessage(formElement, type, message) {
    const messageElement = formElement.querySelector(".form__message");
    messageElement.textContent = message;
    messageElement.classList.remove("form__message--success", "form__message--error");
    messageElement.classList.add(`form__message--$(type)`);
}
setFormMessage(loginForm, "success", "You're Logged in!");
document.addEventListener("DOMContentLoaded", () => {
    const loginForm = document.querySelector("#login");
    const createAccountForm = document.querySelector("#createAccount");

    console.log(loginForm); // Check if the login form is selected correctly
    console.log(createAccountForm); // Check if the create account form is selected correctly

    document.querySelector("#linkCreateAccount").addEventListener("click", e => {
        e.preventDefault();
        console.log("Create account link clicked"); // Confirm the click event
        loginForm.classList.add("form--hidden");
        createAccountForm.classList.remove("form--hidden");
    });

    document.querySelector("#linkLogin").addEventListener("click", e => {
        e.preventDefault();
        console.log("Login link clicked"); // Confirm the click event
        loginForm.classList.remove("form--hidden");
        createAccountForm.classList.add("form--hidden");
    });
    loginForm.addEventListener("submit", e => {
        e.preventDefault();

        setFormMessage(loginForm, "error", "Invalid Username/Password combination");
    });
});

document.addEventListener("DOMContentLoaded", () => {
    const loginForm = document.querySelector("#login");
    const createAccountForm = document.querySelector("#createAccount");
    document.querySelector("#linkCreateAccount").addEventListener("click", e => {
        e.preventDefault();
        loginForm.classList.add("form--hidden");
        createAccountForm.classList.remove("form--hidden");
    })
    document.querySelector("#linkLogin").addEventListener("click", e => {
        loginForm.classList.remove("form--hidden");
        createAccountForm.classList.add("form--hidden");
    })
})