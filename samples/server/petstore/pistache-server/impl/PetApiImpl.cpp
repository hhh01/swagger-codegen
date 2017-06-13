/**
* Swagger Petstore
* This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/

#include "PetApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

PetApiImpl::PetApiImpl(Net::Address addr)
    : PetApi(addr)
    { }

void PetApiImpl::add_pet(const Pet &body, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::delete_pet(const int64_t &petId, const std::string &apiKey, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::find_pets_by_status(const Optional<std::string> &status, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::find_pets_by_tags(const Optional<std::string> &tags, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::get_pet_by_id(const int64_t &petId, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::update_pet(const Pet &body, Net::Http::ResponseWriter &response) {
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::update_pet_with_form(const Net::Rest::Request &request, Net::Http::ResponseWriter &response){
    response.send(Net::Http::Code::Ok, "Do some magic");
}
void PetApiImpl::upload_file(const Net::Rest::Request &request, Net::Http::ResponseWriter &response){
    response.send(Net::Http::Code::Ok, "Do some magic");
}

}
}
}
}

