#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef TRUELAYEROBJECTIVEC_SWIFT_H
#define TRUELAYEROBJECTIVEC_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TrueLayerObjectiveC",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UIColor;
@class NSString;

SWIFT_CLASS("_TtC19TrueLayerObjectiveC24TrueLayerAccessoryColors")
@interface TrueLayerAccessoryColors : NSObject
/// The color for thin borders or divider lines that allows some underlying content to be visible.
@property (nonatomic, strong) UIColor * _Nonnull separator;
/// The color of the border of some content elements.
/// This is mainly used inside the table view cells’ images.
@property (nonatomic, strong) UIColor * _Nonnull uiElementBorder;
- (nonnull instancetype)initWithSeparatorLight:(UIColor * _Nullable)separatorLight uiElementBorderLight:(UIColor * _Nullable)uiElementBorderLight separatorDark:(UIColor * _Nullable)separatorDark uiElementBorderDark:(UIColor * _Nullable)uiElementBorderDark OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithSeparatorLightHex:(NSString * _Nullable)separatorLightHex uiElementBorderLightHex:(NSString * _Nullable)uiElementBorderLightHex separatorDarkHex:(NSString * _Nullable)separatorDarkHex uiElementBorderDarkHex:(NSString * _Nullable)uiElementBorderDarkHex error:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC19TrueLayerObjectiveC25TrueLayerBackgroundColors")
@interface TrueLayerBackgroundColors : NSObject
/// The primary color of the background of the views.
@property (nonatomic, strong) UIColor * _Nonnull backgroundPrimary;
/// The secondary color of the background of the views.
@property (nonatomic, strong) UIColor * _Nonnull backgroundSecondary;
/// The primary color of an action item such as a button (example: Continue).
@property (nonatomic, strong) UIColor * _Nonnull backgroundActionPrimary;
/// The color of the background for the cells.
@property (nonatomic, strong) UIColor * _Nonnull backgroundCell;
- (nonnull instancetype)initWithBackgroundPrimaryLight:(UIColor * _Nullable)backgroundPrimaryLight backgroundSecondaryLight:(UIColor * _Nullable)backgroundSecondaryLight backgroundActionPrimaryLight:(UIColor * _Nullable)backgroundActionPrimaryLight backgroundCellLight:(UIColor * _Nullable)backgroundCellLight backgroundPrimaryDark:(UIColor * _Nullable)backgroundPrimaryDark backgroundSecondaryDark:(UIColor * _Nullable)backgroundSecondaryDark backgroundActionPrimaryDark:(UIColor * _Nullable)backgroundActionPrimaryDark backgroundCellDark:(UIColor * _Nullable)backgroundCellDark OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithBackgroundPrimaryLightHex:(NSString * _Nullable)backgroundPrimaryLightHex backgroundSecondaryLightHex:(NSString * _Nullable)backgroundSecondaryLightHex backgroundActionPrimaryLightHex:(NSString * _Nullable)backgroundActionPrimaryLightHex backgroundCellLightHex:(NSString * _Nullable)backgroundCellLightHex backgroundPrimaryDarkHex:(NSString * _Nullable)backgroundPrimaryDarkHex backgroundSecondaryDarkHex:(NSString * _Nullable)backgroundSecondaryDarkHex backgroundActionPrimaryDarkHex:(NSString * _Nullable)backgroundActionPrimaryDarkHex backgroundCellDarkHex:(NSString * _Nullable)backgroundCellDarkHex error:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TrueLayerContentColors;

/// The list of all used colors throughout the <code>SDK</code>.
/// Customizing these values will allow the integrator to have a more linear visual experience throughout his app.
SWIFT_CLASS("_TtC19TrueLayerObjectiveC15TrueLayerColors")
@interface TrueLayerColors : NSObject
/// The background colors inside the <code>SDK</code>.
@property (nonatomic, strong) TrueLayerBackgroundColors * _Nonnull backgroundColors;
/// The content colors inside the <code>SDK</code>.
@property (nonatomic, strong) TrueLayerContentColors * _Nonnull contentColors;
/// The accessory colors inside the <code>SDK</code>.
@property (nonatomic, strong) TrueLayerAccessoryColors * _Nonnull accessoryColors;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC19TrueLayerObjectiveC22TrueLayerContentColors")
@interface TrueLayerContentColors : NSObject
/// The color of the primary content. That is any generic text around the <code>SDK</code>.
@property (nonatomic, strong) UIColor * _Nonnull contentPrimary;
/// The color of secondary content. This is things like explanation text.
@property (nonatomic, strong) UIColor * _Nonnull contentSecondary;
/// The system color for text on a dark background.
@property (nonatomic, strong) UIColor * _Nonnull contentPrimaryInverted;
/// The color for text invoking an action. Like a link for instance.
@property (nonatomic, strong) UIColor * _Nonnull contentAction;
/// The color of text displaying an error.
@property (nonatomic, strong) UIColor * _Nonnull contentError;
- (nonnull instancetype)initWithContentPrimaryLight:(UIColor * _Nullable)contentPrimaryLight contentSecondaryLight:(UIColor * _Nullable)contentSecondaryLight contentPrimaryInvertedLight:(UIColor * _Nullable)contentPrimaryInvertedLight contentActionLight:(UIColor * _Nullable)contentActionLight contentErrorLight:(UIColor * _Nullable)contentErrorLight contentPrimaryDark:(UIColor * _Nullable)contentPrimaryDark contentSecondaryDark:(UIColor * _Nullable)contentSecondaryDark contentPrimaryInvertedDark:(UIColor * _Nullable)contentPrimaryInvertedDark contentActionDark:(UIColor * _Nullable)contentActionDark contentErrorDark:(UIColor * _Nullable)contentErrorDark OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithContentPrimaryLightHex:(NSString * _Nullable)contentPrimaryLightHex contentSecondaryLightHex:(NSString * _Nullable)contentSecondaryLightHex contentPrimaryInvertedLightHex:(NSString * _Nullable)contentPrimaryInvertedLightHex contentActionLightHex:(NSString * _Nullable)contentActionLightHex contentErrorLightHex:(NSString * _Nullable)contentErrorLightHex contentPrimaryDarkHex:(NSString * _Nullable)contentPrimaryDarkHex contentSecondaryDarkHex:(NSString * _Nullable)contentSecondaryDarkHex contentPrimaryInvertedDarkHex:(NSString * _Nullable)contentPrimaryInvertedDarkHex contentActionDarkHex:(NSString * _Nullable)contentActionDarkHex contentErrorDarkHex:(NSString * _Nullable)contentErrorDarkHex error:(NSError * _Nullable * _Nullable)error;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The environment to use when using the TrueLayer SDK.
typedef SWIFT_ENUM(NSInteger, TrueLayerEnvironment, open) {
/// The sandbox environment.
  TrueLayerEnvironmentSandbox = 0,
/// The production environment.
  TrueLayerEnvironmentProduction = 1,
};

@class NSURL;
@class TrueLayerMandatePreferences;

SWIFT_CLASS("_TtC19TrueLayerObjectiveC23TrueLayerMandateContext")
@interface TrueLayerMandateContext : NSObject
/// The unique identifier of the payment.
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// The security token associated with the payment.
@property (nonatomic, readonly, copy) NSString * _Nonnull token;
/// The destination where the user should be redirected once the authorization flow is done outside of the app (bank website, HPP).
@property (nonatomic, readonly, copy) NSURL * _Nonnull redirectURL;
/// The optional preferences to apply to the payment.
@property (nonatomic, readonly, strong) TrueLayerMandatePreferences * _Nonnull preferences;
/// Creates and returns an instance of <code>Context</code>.
/// \param identifier The unique identifier of the payment.
///
/// \param token The security token associated with the payment.
///
/// \param redirectURL The destination where the user should be redirected once the authorization flow is done outside of the app.
///
/// \param preferences The preferences to apply to the payment.
///
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier token:(NSString * _Nonnull)token redirectURL:(NSURL * _Nonnull)redirectURL preferences:(TrueLayerMandatePreferences * _Nonnull)preferences OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The list of possible errors that can happen inside of <code>TrueLayer</code>’s SDK when processing a mandate.
typedef SWIFT_ENUM(NSInteger, TrueLayerMandateError, open) {
/// The authorization process failed on the user <-> bank side.
  TrueLayerMandateErrorAuthorizationFailed = 0,
/// There was an issue while connecting to the internet.
/// Either the user is offline, or the request timed out.
  TrueLayerMandateErrorConnectionIssues = 1,
/// A unexpected error, the error will be passed as a <code>String</code> parameter.
  TrueLayerMandateErrorGeneric = 2,
/// The token used to make the mandate is not authorized to undergo such operation.
  TrueLayerMandateErrorInvalidToken = 3,
/// The redirect URI passed to the TrueLayer SDK is invalid.
  TrueLayerMandateErrorInvalidRedirectURI = 4,
/// The mandate expired.
  TrueLayerMandateErrorMandateExpired = 5,
/// The requested mandate was not found.
/// This is probably due to it not being created on the backend side.
  TrueLayerMandateErrorMandateNotFound = 6,
/// The mandate was rejected by the bank.
  TrueLayerMandateErrorMandateRejected = 7,
/// The pre-selected provider was offline.
  TrueLayerMandateErrorProviderOffline = 8,
/// The mandate has been revoked and is no longer valid.
  TrueLayerMandateErrorRevoked = 9,
/// The SDK <code>configure</code> method has not been called before using it.
  TrueLayerMandateErrorSdkNotConfigured = 10,
/// The server encountered an error while processing the answer.
  TrueLayerMandateErrorServerError = 11,
/// The SDK encountered an unexpected behaviour.
/// This error should never occur.
  TrueLayerMandateErrorUnexpectedBehavior = 12,
/// The user canceled the mandate.
  TrueLayerMandateErrorUserCanceled = 13,
};
static NSString * _Nonnull const TrueLayerMandateErrorDomain = @"TrueLayerObjectiveC.TrueLayerMandateError";

@class TrueLayerPresentationStyle;

/// A set of preferences that can be applied to a mandate.
SWIFT_CLASS("_TtC19TrueLayerObjectiveC27TrueLayerMandatePreferences")
@interface TrueLayerMandatePreferences : NSObject
/// Creates a new instance of Preferences. All values default to <code>nil</code>.
/// \param presentationStyle The presentation style of the SDK.
///
- (nonnull instancetype)initWithPresentationStyle:(TrueLayerPresentationStyle * _Nonnull)presentationStyle OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The different final states in which a mandate can be when successful.
typedef SWIFT_ENUM(NSInteger, TrueLayerMandateState, open) {
/// The user authorized the mandate with the bank.
  TrueLayerMandateStateAuthorized = 0,
/// Then user has been redirected to the bank to authorize the mandate.
/// We do not know what happens from there on since we do not have any control over it.
  TrueLayerMandateStateRedirect = 1,
};

typedef SWIFT_ENUM(NSInteger, TrueLayerMandateStatus, open) {
/// The mandate requires authorization.
/// Pass the same context to the <code>processMandate(context:then:)</code> method.
  TrueLayerMandateStatusAuthorizationRequired = 0,
/// The user is authorizing the mandate.
/// If still in this state after the <code>SDK</code> dismissed means the user has additional actions to take outside of the application.
  TrueLayerMandateStatusAuthorizing = 1,
/// The mandate has been authorized by the bank.
/// This is a final stage status.
  TrueLayerMandateStatusAuthorized = 2,
/// The mandate has been revoked and is no longer valid.
/// This is a final stage status.
  TrueLayerMandateStatusRevoked = 3,
/// The mandate failed. This can be due to various reasons.
/// This is a final stage status.
  TrueLayerMandateStatusFailed = 4,
};

/// The reason for sending the mandate.
typedef SWIFT_ENUM(NSInteger, TrueLayerMandateUseCase, open) {
/// The mandate is being used to send money.
  TrueLayerMandateUseCaseSend = 0,
/// The mandate is being used for Signup+.
/// This will display a String to the user explaining that the mandate will be used for Signup+.
  TrueLayerMandateUseCaseSignupPlus = 1,
};

@class TrueLayerVisualSettings;
@class TrueLayerSinglePaymentContext;
enum TrueLayerSinglePaymentState : NSInteger;
enum TrueLayerSinglePaymentError : NSInteger;
enum TrueLayerSinglePaymentStatus : NSInteger;

SWIFT_CLASS("_TtC19TrueLayerObjectiveC24TrueLayerPaymentsManager")
@interface TrueLayerPaymentsManager : NSObject
/// Configures the <code>SDK</code>.
/// This method should be called once and only once. Failing to do so will result in the <code>SDK</code> throwing an error.
/// note:
/// this method is thread-safe.
/// \param environment The environment to use throughout the SDK authorization flows.
///
/// \param visualSettings An instance of <code>TrueLayerVisualSettings</code> providing customisations for the <code>SDK</code>.
///
/// \param additionalConfiguration Additional configuration values to use to set up the SDK.
///
+ (void)configureWithEnvironment:(enum TrueLayerEnvironment)environment visualSettings:(TrueLayerVisualSettings * _Nullable)visualSettings additionalConfiguration:(NSDictionary<NSString *, NSString *> * _Nonnull)additionalConfiguration;
/// It presents the SDK in the app to carry out a payment.
/// This method can be called multiple times to process different payments.
/// Before using this method, make sure that the SDK has been started, otherwise it will raise an error.
/// note:
/// this method is thread-safe.
/// \param context an object that contains all the information required for the payment and to customise how the SDK behaves.
///
/// \param success a completion handler to execute in case of success.
///
/// \param failure a completion handler to execute in case of failure.
///
+ (void)processSinglePaymentWithContext:(TrueLayerSinglePaymentContext * _Nonnull)context success:(void (^ _Nonnull)(enum TrueLayerSinglePaymentState))success failure:(void (^ _Nonnull)(enum TrueLayerSinglePaymentError))failure;
/// Fetches the status of a single payment given its identifier and security token.
/// \param paymentIdentifier The unique identifier of the payment.
///
/// \param resourceToken The security token associated with the payment.
///
/// \param success a completion handler to execute in case of success.
///
/// \param failure a completion handler to execute in case of failure.
///
+ (void)singlePaymentStatusWithPaymentIdentifier:(NSString * _Nonnull)paymentIdentifier resourceToken:(NSString * _Nonnull)resourceToken success:(void (^ _Nonnull)(enum TrueLayerSinglePaymentStatus))success failure:(void (^ _Nonnull)(enum TrueLayerSinglePaymentError))failure;
/// It presents the SDK in the app to carry out a mandate.
/// This method can be called multiple times to process different mandates.
/// Before using this method, make sure that the SDK has been started, otherwise it will raise an error.
/// note:
/// this method is thread-safe.
/// \param context an object that contains all the information required for the payment and to customise how the SDK behaves.
///
/// \param success a completion handler to execute in case of success.
///
/// \param failure a completion handler to execute in case of failure.
///
+ (void)processMandateWithContext:(TrueLayerMandateContext * _Nonnull)context success:(void (^ _Nonnull)(enum TrueLayerMandateState))success failure:(void (^ _Nonnull)(enum TrueLayerMandateError))failure;
/// Fetches the status of a mandate given its identifier and security token.
/// \param mandateIdentifier The unique identifier of the mandate.
///
/// \param resourceToken The security token associated with the mandate.
///
/// \param success a completion handler to execute in case of success.
///
/// \param failure a completion handler to execute in case of failure.
///
+ (void)mandateStatusWithMandateIdentifier:(NSString * _Nonnull)mandateIdentifier resourceToken:(NSString * _Nonnull)resourceToken success:(void (^ _Nonnull)(enum TrueLayerMandateStatus))success failure:(void (^ _Nonnull)(enum TrueLayerMandateError))failure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIViewController;

SWIFT_CLASS("_TtC19TrueLayerObjectiveC26TrueLayerPresentationStyle")
@interface TrueLayerPresentationStyle : NSObject
/// Creates an return a <code>TrueLayerPresentationStyle</code> where the <code>SDK</code> is presented in <code>modal</code>.
/// \param viewController The <code>UIViewController</code> to present on.
///
/// \param style The <code>modal</code> presentation style.
///
- (nonnull instancetype)initWithPresentOn:(UIViewController * _Nonnull)viewController style:(UIModalPresentationStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TrueLayerSinglePaymentPreferences;

SWIFT_CLASS("_TtC19TrueLayerObjectiveC29TrueLayerSinglePaymentContext")
@interface TrueLayerSinglePaymentContext : NSObject
/// The unique identifier of the payment.
@property (nonatomic, readonly, copy) NSString * _Nonnull identifier;
/// The security token associated with the payment.
@property (nonatomic, readonly, copy) NSString * _Nonnull token;
/// The destination where the user should be redirected once the authorization flow is done outside of the app (bank website, HPP).
@property (nonatomic, readonly, copy) NSURL * _Nonnull redirectURL;
/// The optional preferences to apply to the payment.
@property (nonatomic, readonly, strong) TrueLayerSinglePaymentPreferences * _Nonnull preferences;
/// Creates and returns an instance of <code>Context</code>.
/// \param identifier The unique identifier of the payment.
///
/// \param token The security token associated with the payment.
///
/// \param redirectURL The destination where the user should be redirected once the authorization flow is done outside of the app.
///
/// \param preferences The preferences to apply to the payment.
///
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier token:(NSString * _Nonnull)token redirectURL:(NSURL * _Nonnull)redirectURL preferences:(TrueLayerSinglePaymentPreferences * _Nonnull)preferences OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The different errors which can occur while processing a single payment.
typedef SWIFT_ENUM(NSInteger, TrueLayerSinglePaymentError, open) {
/// The authorization process failed on the user <-> bank side.
  TrueLayerSinglePaymentErrorAuthorizationFailed = 0,
/// There was an issue while connecting to the internet.
/// Either the user is offline, or the request timed out.
  TrueLayerSinglePaymentErrorConnectionIssues = 1,
/// A unexpected error, the error will be passed as a <code>String</code> parameter.
  TrueLayerSinglePaymentErrorGeneric = 2,
/// The token used to make the payment is not authorized to undergo such operation.
  TrueLayerSinglePaymentErrorInvalidToken = 3,
/// The redirect URI passed to the TrueLayer SDK is invalid.
  TrueLayerSinglePaymentErrorInvalidRedirectURI = 4,
/// The user took too long to complete the payment, and therefore it expired.
  TrueLayerSinglePaymentErrorPaymentExpired = 5,
/// The requested payment was not found.
/// This is probably due to it not being created on the backend side.
  TrueLayerSinglePaymentErrorPaymentNotFound = 6,
/// The payment was rejected by the bank.
  TrueLayerSinglePaymentErrorPaymentRejected = 7,
/// The pre-selected provider was offline.
  TrueLayerSinglePaymentErrorProviderOffline = 8,
/// The <code>SDK</code> <code>configure</code> method has not been called before using it.
  TrueLayerSinglePaymentErrorSdkNotConfigured = 9,
/// The server encountered an error while processing the answer.
  TrueLayerSinglePaymentErrorServerError = 10,
/// The <code>SDK</code> encountered an unexpected behavior.
/// This error should never occur.
  TrueLayerSinglePaymentErrorUnexpectedBehavior = 11,
/// The user canceled the payment.
  TrueLayerSinglePaymentErrorUserCanceled = 12,
};
static NSString * _Nonnull const TrueLayerSinglePaymentErrorDomain = @"TrueLayerObjectiveC.TrueLayerSinglePaymentError";

enum TrueLayerSinglePaymentUseCase : NSInteger;

/// A set of preferences that can be applied to a single payment.
SWIFT_CLASS("_TtC19TrueLayerObjectiveC33TrueLayerSinglePaymentPreferences")
@interface TrueLayerSinglePaymentPreferences : NSObject
/// Creates a new instance of Preferences. All values default to <code>nil</code>.
/// \param presentationStyle The presentation style of the SDK.
///
/// \param preferredCountryCode The preferred country to use when displaying the providers.
///
/// \param useCase The reason for the payment.
///
- (nonnull instancetype)initWithPresentationStyle:(TrueLayerPresentationStyle * _Nonnull)presentationStyle preferredCountryCode:(NSString * _Nullable)preferredCountryCode useCase:(enum TrueLayerSinglePaymentUseCase)useCase OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// The different final states in which a payment can be when successful.
typedef SWIFT_ENUM(NSInteger, TrueLayerSinglePaymentState, open) {
/// The user authorized the payment with the bank.
  TrueLayerSinglePaymentStateAuthorized = 0,
/// The bank confirmed the payment.
  TrueLayerSinglePaymentStateExecuted = 1,
/// Then user has been redirected to the bank to authorize the payment.
/// We do not know what happens from there on since we do not have any control over it.
  TrueLayerSinglePaymentStateRedirect = 2,
/// The funds have reached the destination.
  TrueLayerSinglePaymentStateSettled = 3,
/// The user did everything needed to do, but the merchant has to wait for the output.
  TrueLayerSinglePaymentStateWait = 4,
};

typedef SWIFT_ENUM(NSInteger, TrueLayerSinglePaymentStatus, open) {
/// The payment requires authorisation.
/// Pass the same context to the <code>processPayment(context:then:)</code> method.
  TrueLayerSinglePaymentStatusAuthorizationRequired = 0,
/// The user is authorizing the payment.
/// If still in this state after the <code>SDK</code> dismissed means the user has additional actions to take outside of the application.
  TrueLayerSinglePaymentStatusAuthorizing = 1,
/// The payment has been authorized by the bank.
/// This is a final stage status.
  TrueLayerSinglePaymentStatusAuthorized = 2,
/// The payment has been executed.
/// This is a final stage status.
  TrueLayerSinglePaymentStatusExecuted = 3,
/// The funds reached their final destination.
/// This is a final stage status.
  TrueLayerSinglePaymentStatusSettled = 4,
/// The payment failed. This can be due to various reasons.
/// This is a final stage status.
  TrueLayerSinglePaymentStatusFailed = 5,
};

/// The reason for sending the payment.
typedef SWIFT_ENUM(NSInteger, TrueLayerSinglePaymentUseCase, open) {
/// The payment is being used to send money.
  TrueLayerSinglePaymentUseCaseSend = 0,
/// The payment is being used for Signup+.
/// This will display a String to the user explaining that the payment will be used for Signup+.
  TrueLayerSinglePaymentUseCaseSignupPlus = 1,
};


/// An object providing all the necessary pieces to customize the visual aspect of the <code>SDK</code>.
/// All values fallback to a default one making easy to customize only the desired bits.
/// The following pieces can be customized:
/// <ul>
///   <li>
///     The colors, be it of the background, content etc.. All colors can be modified.
///     They are not passed as single colors but as a pair inside <code>ChameleonColor</code>.
///     The light color will be used in light mode, and the dark one in dark mode.
///   </li>
///   <li>
///     The font family.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC19TrueLayerObjectiveC23TrueLayerVisualSettings")
@interface TrueLayerVisualSettings : NSObject
/// The colors to use for components in the <code>SDK</code>.
@property (nonatomic, strong) TrueLayerColors * _Nonnull colors;
/// The family name of the font.
/// If the SDK fails to load it, it will fallback on the system’s font.
@property (nonatomic, copy) NSString * _Nonnull fontFamilyName SWIFT_DEPRECATED_MSG("Use customFontFamilyName instead.", "customFontFamilyName");
/// The family name of the font.
/// If the SDK fails to load it, it will fallback on the system’s font.
@property (nonatomic, copy) NSString * _Nullable customFontFamilyName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
