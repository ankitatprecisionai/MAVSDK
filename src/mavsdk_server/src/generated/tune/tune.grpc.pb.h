// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: tune/tune.proto
#ifndef GRPC_tune_2ftune_2eproto__INCLUDED
#define GRPC_tune_2ftune_2eproto__INCLUDED

#include "tune/tune.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace mavsdk {
namespace rpc {
namespace tune {

// Enable creating and sending a tune to be played on the system.
class TuneService final {
 public:
  static constexpr char const* service_full_name() {
    return "mavsdk.rpc.tune.TuneService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Send a tune to be played by the system.
    virtual ::grpc::Status PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::mavsdk::rpc::tune::PlayTuneResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>> AsyncPlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>>(AsyncPlayTuneRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>> PrepareAsyncPlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>>(PrepareAsyncPlayTuneRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Send a tune to be played by the system.
      virtual void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>* AsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::mavsdk::rpc::tune::PlayTuneResponse>* PrepareAsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::mavsdk::rpc::tune::PlayTuneResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>> AsyncPlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>>(AsyncPlayTuneRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>> PrepareAsyncPlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>>(PrepareAsyncPlayTuneRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void PlayTune(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>* AsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::tune::PlayTuneResponse>* PrepareAsyncPlayTuneRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_PlayTune_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Send a tune to be played by the system.
    virtual ::grpc::Status PlayTune(::grpc::ServerContext* context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PlayTune() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPlayTune(::grpc::ServerContext* context, ::mavsdk::rpc::tune::PlayTuneRequest* request, ::grpc::ServerAsyncResponseWriter< ::mavsdk::rpc::tune::PlayTuneResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_PlayTune<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_PlayTune() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::mavsdk::rpc::tune::PlayTuneRequest* request, ::mavsdk::rpc::tune::PlayTuneResponse* response) { return this->PlayTune(context, request, response); }));}
    void SetMessageAllocatorFor_PlayTune(
        ::grpc::experimental::MessageAllocator< ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* PlayTune(
      ::grpc::CallbackServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* PlayTune(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_PlayTune<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_PlayTune<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PlayTune() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PlayTune() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPlayTune(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_PlayTune() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PlayTune(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* PlayTune(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* PlayTune(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PlayTune : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PlayTune() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::mavsdk::rpc::tune::PlayTuneRequest, ::mavsdk::rpc::tune::PlayTuneResponse>* streamer) {
                       return this->StreamedPlayTune(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_PlayTune() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PlayTune(::grpc::ServerContext* /*context*/, const ::mavsdk::rpc::tune::PlayTuneRequest* /*request*/, ::mavsdk::rpc::tune::PlayTuneResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPlayTune(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::mavsdk::rpc::tune::PlayTuneRequest,::mavsdk::rpc::tune::PlayTuneResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_PlayTune<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_PlayTune<Service > StreamedService;
};

}  // namespace tune
}  // namespace rpc
}  // namespace mavsdk


#endif  // GRPC_tune_2ftune_2eproto__INCLUDED