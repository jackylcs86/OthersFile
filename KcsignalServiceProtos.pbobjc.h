// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KcsignalServiceProtos.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class KCSignalServiceProtosAttachmentPointer;
@class KCSignalServiceProtosContactDetails_Avatar;
@class KCSignalServiceProtosDataMessage;
@class KCSignalServiceProtosGroupContext;
@class KCSignalServiceProtosGroupDetails_Avatar;
@class KCSignalServiceProtosSecretAccessDetails;
@class KCSignalServiceProtosSyncMessage;
@class KCSignalServiceProtosSyncMessage_Blocked;
@class KCSignalServiceProtosSyncMessage_Contacts;
@class KCSignalServiceProtosSyncMessage_Groups;
@class KCSignalServiceProtosSyncMessage_Read;
@class KCSignalServiceProtosSyncMessage_Request;
@class KCSignalServiceProtosSyncMessage_Sent;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum KCSignalServiceProtosEnvelope_Type

typedef GPB_ENUM(KCSignalServiceProtosEnvelope_Type) {
  KCSignalServiceProtosEnvelope_Type_Unknown = 0,
  KCSignalServiceProtosEnvelope_Type_Ciphertext = 1,
  KCSignalServiceProtosEnvelope_Type_KeyExchange = 2,
  KCSignalServiceProtosEnvelope_Type_PrekeyBundle = 3,
  KCSignalServiceProtosEnvelope_Type_Receipt = 5,
  KCSignalServiceProtosEnvelope_Type_UnlockRequestRequest = 6,
  KCSignalServiceProtosEnvelope_Type_UnlockRequestAccept = 7,
  KCSignalServiceProtosEnvelope_Type_UnlockRequestReject = 8,
};

GPBEnumDescriptor *KCSignalServiceProtosEnvelope_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosEnvelope_Type_IsValidValue(int32_t value);

#pragma mark - Enum KCSignalServiceProtosDataMessage_Flags

typedef GPB_ENUM(KCSignalServiceProtosDataMessage_Flags) {
  KCSignalServiceProtosDataMessage_Flags_EndSession = 1,
  KCSignalServiceProtosDataMessage_Flags_ExpirationTimerUpdate = 2,
};

GPBEnumDescriptor *KCSignalServiceProtosDataMessage_Flags_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosDataMessage_Flags_IsValidValue(int32_t value);

#pragma mark - Enum KCSignalServiceProtosDataMessage_Type

typedef GPB_ENUM(KCSignalServiceProtosDataMessage_Type) {
  KCSignalServiceProtosDataMessage_Type_Somessagetypetext = 0,
  KCSignalServiceProtosDataMessage_Type_Somessagetypephoto = 1,
  KCSignalServiceProtosDataMessage_Type_Somessagetypevideo = 2,
  KCSignalServiceProtosDataMessage_Type_Somessagetypeother = 3,
  KCSignalServiceProtosDataMessage_Type_Somessagetypereply = 4,
  KCSignalServiceProtosDataMessage_Type_Somessagetypesecrettext = 5,
  KCSignalServiceProtosDataMessage_Type_Somessagetypesecretphoto = 6,
  KCSignalServiceProtosDataMessage_Type_Somessagetypesecretvideo = 7,
  KCSignalServiceProtosDataMessage_Type_Somessagetypesecretother = 8,
};

GPBEnumDescriptor *KCSignalServiceProtosDataMessage_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosDataMessage_Type_IsValidValue(int32_t value);

#pragma mark - Enum KCSignalServiceProtosSyncMessage_Request_Type

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Request_Type) {
  KCSignalServiceProtosSyncMessage_Request_Type_Unknown = 0,
  KCSignalServiceProtosSyncMessage_Request_Type_Contacts = 1,
  KCSignalServiceProtosSyncMessage_Request_Type_Groups = 2,
  KCSignalServiceProtosSyncMessage_Request_Type_Blocked = 3,
};

GPBEnumDescriptor *KCSignalServiceProtosSyncMessage_Request_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosSyncMessage_Request_Type_IsValidValue(int32_t value);

#pragma mark - Enum KCSignalServiceProtosSecretAccessDetails_Type

typedef GPB_ENUM(KCSignalServiceProtosSecretAccessDetails_Type) {
  KCSignalServiceProtosSecretAccessDetails_Type_None = 0,
  KCSignalServiceProtosSecretAccessDetails_Type_Passcode = 1,
  KCSignalServiceProtosSecretAccessDetails_Type_Qanda = 2,
  KCSignalServiceProtosSecretAccessDetails_Type_Games = 3,
  KCSignalServiceProtosSecretAccessDetails_Type_Pattern = 4,
  KCSignalServiceProtosSecretAccessDetails_Type_Defaultpasscode = 5,
};

GPBEnumDescriptor *KCSignalServiceProtosSecretAccessDetails_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosSecretAccessDetails_Type_IsValidValue(int32_t value);

#pragma mark - Enum KCSignalServiceProtosGroupContext_Type

typedef GPB_ENUM(KCSignalServiceProtosGroupContext_Type) {
  KCSignalServiceProtosGroupContext_Type_Unknown = 0,
  KCSignalServiceProtosGroupContext_Type_Update = 1,
  KCSignalServiceProtosGroupContext_Type_Deliver = 2,
  KCSignalServiceProtosGroupContext_Type_Quit = 3,
};

GPBEnumDescriptor *KCSignalServiceProtosGroupContext_Type_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL KCSignalServiceProtosGroupContext_Type_IsValidValue(int32_t value);

#pragma mark - KCSignalServiceProtosKcsignalServiceProtosRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface KCSignalServiceProtosKcsignalServiceProtosRoot : GPBRootObject
@end

#pragma mark - KCSignalServiceProtosEnvelope

typedef GPB_ENUM(KCSignalServiceProtosEnvelope_FieldNumber) {
  KCSignalServiceProtosEnvelope_FieldNumber_Type = 1,
  KCSignalServiceProtosEnvelope_FieldNumber_Source = 2,
  KCSignalServiceProtosEnvelope_FieldNumber_Relay = 3,
  KCSignalServiceProtosEnvelope_FieldNumber_Timestamp = 5,
  KCSignalServiceProtosEnvelope_FieldNumber_LegacyMessage = 6,
  KCSignalServiceProtosEnvelope_FieldNumber_SourceDevice = 7,
  KCSignalServiceProtosEnvelope_FieldNumber_Content = 8,
  KCSignalServiceProtosEnvelope_FieldNumber_MessageId = 9,
};

@interface KCSignalServiceProtosEnvelope : GPBMessage

@property(nonatomic, readwrite) KCSignalServiceProtosEnvelope_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@property(nonatomic, readwrite, copy, null_resettable) NSString *source;
/** Test to see if @c source has been set. */
@property(nonatomic, readwrite) BOOL hasSource;

@property(nonatomic, readwrite) uint32_t sourceDevice;

@property(nonatomic, readwrite) BOOL hasSourceDevice;
@property(nonatomic, readwrite, copy, null_resettable) NSString *relay;
/** Test to see if @c relay has been set. */
@property(nonatomic, readwrite) BOOL hasRelay;

@property(nonatomic, readwrite, copy, null_resettable) NSString *messageId;
/** Test to see if @c messageId has been set. */
@property(nonatomic, readwrite) BOOL hasMessageId;

@property(nonatomic, readwrite) uint64_t timestamp;

@property(nonatomic, readwrite) BOOL hasTimestamp;
/** Contains an encrypted DataMessage */
@property(nonatomic, readwrite, copy, null_resettable) NSData *legacyMessage;
/** Test to see if @c legacyMessage has been set. */
@property(nonatomic, readwrite) BOOL hasLegacyMessage;

/** Contains an encrypted Content */
@property(nonatomic, readwrite, copy, null_resettable) NSData *content;
/** Test to see if @c content has been set. */
@property(nonatomic, readwrite) BOOL hasContent;

@end

#pragma mark - KCSignalServiceProtosContent

typedef GPB_ENUM(KCSignalServiceProtosContent_FieldNumber) {
  KCSignalServiceProtosContent_FieldNumber_DataMessage = 1,
  KCSignalServiceProtosContent_FieldNumber_SyncMessage = 2,
};

@interface KCSignalServiceProtosContent : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosDataMessage *dataMessage;
/** Test to see if @c dataMessage has been set. */
@property(nonatomic, readwrite) BOOL hasDataMessage;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage *syncMessage;
/** Test to see if @c syncMessage has been set. */
@property(nonatomic, readwrite) BOOL hasSyncMessage;

@end

#pragma mark - KCSignalServiceProtosDataMessage

typedef GPB_ENUM(KCSignalServiceProtosDataMessage_FieldNumber) {
  KCSignalServiceProtosDataMessage_FieldNumber_Body = 1,
  KCSignalServiceProtosDataMessage_FieldNumber_AttachmentsArray = 2,
  KCSignalServiceProtosDataMessage_FieldNumber_Group = 3,
  KCSignalServiceProtosDataMessage_FieldNumber_Flags = 4,
  KCSignalServiceProtosDataMessage_FieldNumber_ExpireTimer = 5,
  KCSignalServiceProtosDataMessage_FieldNumber_Secret = 6,
  KCSignalServiceProtosDataMessage_FieldNumber_AccessDetails = 7,
  KCSignalServiceProtosDataMessage_FieldNumber_MessageType = 8,
};

@interface KCSignalServiceProtosDataMessage : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *body;
/** Test to see if @c body has been set. */
@property(nonatomic, readwrite) BOOL hasBody;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<KCSignalServiceProtosAttachmentPointer*> *attachmentsArray;
/** The number of items in @c attachmentsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger attachmentsArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosGroupContext *group;
/** Test to see if @c group has been set. */
@property(nonatomic, readwrite) BOOL hasGroup;

@property(nonatomic, readwrite) uint32_t flags;

@property(nonatomic, readwrite) BOOL hasFlags;
@property(nonatomic, readwrite) uint32_t expireTimer;

@property(nonatomic, readwrite) BOOL hasExpireTimer;
@property(nonatomic, readwrite) BOOL secret;

@property(nonatomic, readwrite) BOOL hasSecret;
@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSecretAccessDetails *accessDetails;
/** Test to see if @c accessDetails has been set. */
@property(nonatomic, readwrite) BOOL hasAccessDetails;

@property(nonatomic, readwrite) KCSignalServiceProtosDataMessage_Type messageType;

@property(nonatomic, readwrite) BOOL hasMessageType;
@end

#pragma mark - KCSignalServiceProtosSyncMessage

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_FieldNumber) {
  KCSignalServiceProtosSyncMessage_FieldNumber_Sent = 1,
  KCSignalServiceProtosSyncMessage_FieldNumber_Contacts = 2,
  KCSignalServiceProtosSyncMessage_FieldNumber_Groups = 3,
  KCSignalServiceProtosSyncMessage_FieldNumber_Request = 4,
  KCSignalServiceProtosSyncMessage_FieldNumber_ReadArray = 5,
  KCSignalServiceProtosSyncMessage_FieldNumber_Blocked = 6,
};

@interface KCSignalServiceProtosSyncMessage : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage_Sent *sent;
/** Test to see if @c sent has been set. */
@property(nonatomic, readwrite) BOOL hasSent;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage_Contacts *contacts;
/** Test to see if @c contacts has been set. */
@property(nonatomic, readwrite) BOOL hasContacts;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage_Groups *groups;
/** Test to see if @c groups has been set. */
@property(nonatomic, readwrite) BOOL hasGroups;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage_Request *request;
/** Test to see if @c request has been set. */
@property(nonatomic, readwrite) BOOL hasRequest;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<KCSignalServiceProtosSyncMessage_Read*> *readArray;
/** The number of items in @c readArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger readArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosSyncMessage_Blocked *blocked;
/** Test to see if @c blocked has been set. */
@property(nonatomic, readwrite) BOOL hasBlocked;

@end

#pragma mark - KCSignalServiceProtosSyncMessage_Sent

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Sent_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Sent_FieldNumber_Destination = 1,
  KCSignalServiceProtosSyncMessage_Sent_FieldNumber_Timestamp = 2,
  KCSignalServiceProtosSyncMessage_Sent_FieldNumber_Message = 3,
  KCSignalServiceProtosSyncMessage_Sent_FieldNumber_ExpirationStartTimestamp = 4,
};

@interface KCSignalServiceProtosSyncMessage_Sent : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *destination;
/** Test to see if @c destination has been set. */
@property(nonatomic, readwrite) BOOL hasDestination;

@property(nonatomic, readwrite) uint64_t timestamp;

@property(nonatomic, readwrite) BOOL hasTimestamp;
@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosDataMessage *message;
/** Test to see if @c message has been set. */
@property(nonatomic, readwrite) BOOL hasMessage;

@property(nonatomic, readwrite) uint64_t expirationStartTimestamp;

@property(nonatomic, readwrite) BOOL hasExpirationStartTimestamp;
@end

#pragma mark - KCSignalServiceProtosSyncMessage_Contacts

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Contacts_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Contacts_FieldNumber_Blob = 1,
};

@interface KCSignalServiceProtosSyncMessage_Contacts : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosAttachmentPointer *blob;
/** Test to see if @c blob has been set. */
@property(nonatomic, readwrite) BOOL hasBlob;

@end

#pragma mark - KCSignalServiceProtosSyncMessage_Groups

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Groups_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Groups_FieldNumber_Blob = 1,
};

@interface KCSignalServiceProtosSyncMessage_Groups : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosAttachmentPointer *blob;
/** Test to see if @c blob has been set. */
@property(nonatomic, readwrite) BOOL hasBlob;

@end

#pragma mark - KCSignalServiceProtosSyncMessage_Blocked

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Blocked_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Blocked_FieldNumber_NumbersArray = 1,
};

@interface KCSignalServiceProtosSyncMessage_Blocked : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *numbersArray;
/** The number of items in @c numbersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger numbersArray_Count;

@end

#pragma mark - KCSignalServiceProtosSyncMessage_Request

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Request_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Request_FieldNumber_Type = 1,
};

@interface KCSignalServiceProtosSyncMessage_Request : GPBMessage

@property(nonatomic, readwrite) KCSignalServiceProtosSyncMessage_Request_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@end

#pragma mark - KCSignalServiceProtosSyncMessage_Read

typedef GPB_ENUM(KCSignalServiceProtosSyncMessage_Read_FieldNumber) {
  KCSignalServiceProtosSyncMessage_Read_FieldNumber_Sender = 1,
  KCSignalServiceProtosSyncMessage_Read_FieldNumber_Timestamp = 2,
};

@interface KCSignalServiceProtosSyncMessage_Read : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *sender;
/** Test to see if @c sender has been set. */
@property(nonatomic, readwrite) BOOL hasSender;

@property(nonatomic, readwrite) uint64_t timestamp;

@property(nonatomic, readwrite) BOOL hasTimestamp;
@end

#pragma mark - KCSignalServiceProtosSecretAccessDetails

typedef GPB_ENUM(KCSignalServiceProtosSecretAccessDetails_FieldNumber) {
  KCSignalServiceProtosSecretAccessDetails_FieldNumber_Question = 1,
  KCSignalServiceProtosSecretAccessDetails_FieldNumber_Answer = 2,
  KCSignalServiceProtosSecretAccessDetails_FieldNumber_Type = 3,
};

@interface KCSignalServiceProtosSecretAccessDetails : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *question;
/** Test to see if @c question has been set. */
@property(nonatomic, readwrite) BOOL hasQuestion;

@property(nonatomic, readwrite, copy, null_resettable) NSString *answer;
/** Test to see if @c answer has been set. */
@property(nonatomic, readwrite) BOOL hasAnswer;

@property(nonatomic, readwrite) KCSignalServiceProtosSecretAccessDetails_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@end

#pragma mark - KCSignalServiceProtosAttachmentPointer

typedef GPB_ENUM(KCSignalServiceProtosAttachmentPointer_FieldNumber) {
  KCSignalServiceProtosAttachmentPointer_FieldNumber_Id_p = 1,
  KCSignalServiceProtosAttachmentPointer_FieldNumber_ContentType = 2,
  KCSignalServiceProtosAttachmentPointer_FieldNumber_Key = 3,
  KCSignalServiceProtosAttachmentPointer_FieldNumber_Size = 4,
  KCSignalServiceProtosAttachmentPointer_FieldNumber_Thumbnail = 5,
  KCSignalServiceProtosAttachmentPointer_FieldNumber_ServerId = 6,
};

@interface KCSignalServiceProtosAttachmentPointer : GPBMessage

@property(nonatomic, readwrite) uint64_t id_p;

@property(nonatomic, readwrite) BOOL hasId_p;
@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;
/** Test to see if @c contentType has been set. */
@property(nonatomic, readwrite) BOOL hasContentType;

@property(nonatomic, readwrite, copy, null_resettable) NSData *key;
/** Test to see if @c key has been set. */
@property(nonatomic, readwrite) BOOL hasKey;

@property(nonatomic, readwrite) uint32_t size;

@property(nonatomic, readwrite) BOOL hasSize;
@property(nonatomic, readwrite, copy, null_resettable) NSData *thumbnail;
/** Test to see if @c thumbnail has been set. */
@property(nonatomic, readwrite) BOOL hasThumbnail;

@property(nonatomic, readwrite, copy, null_resettable) NSString *serverId;
/** Test to see if @c serverId has been set. */
@property(nonatomic, readwrite) BOOL hasServerId;

@end

#pragma mark - KCSignalServiceProtosGroupContext

typedef GPB_ENUM(KCSignalServiceProtosGroupContext_FieldNumber) {
  KCSignalServiceProtosGroupContext_FieldNumber_Id_p = 1,
  KCSignalServiceProtosGroupContext_FieldNumber_Type = 2,
  KCSignalServiceProtosGroupContext_FieldNumber_Name = 3,
  KCSignalServiceProtosGroupContext_FieldNumber_MembersArray = 4,
  KCSignalServiceProtosGroupContext_FieldNumber_Avatar = 5,
};

@interface KCSignalServiceProtosGroupContext : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *id_p;
/** Test to see if @c id_p has been set. */
@property(nonatomic, readwrite) BOOL hasId_p;

@property(nonatomic, readwrite) KCSignalServiceProtosGroupContext_Type type;

@property(nonatomic, readwrite) BOOL hasType;
@property(nonatomic, readwrite, copy, null_resettable) NSString *name;
/** Test to see if @c name has been set. */
@property(nonatomic, readwrite) BOOL hasName;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *membersArray;
/** The number of items in @c membersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger membersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosAttachmentPointer *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@end

#pragma mark - KCSignalServiceProtosContactDetails

typedef GPB_ENUM(KCSignalServiceProtosContactDetails_FieldNumber) {
  KCSignalServiceProtosContactDetails_FieldNumber_Number = 1,
  KCSignalServiceProtosContactDetails_FieldNumber_Name = 2,
  KCSignalServiceProtosContactDetails_FieldNumber_Avatar = 3,
  KCSignalServiceProtosContactDetails_FieldNumber_Color = 4,
};

@interface KCSignalServiceProtosContactDetails : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *number;
/** Test to see if @c number has been set. */
@property(nonatomic, readwrite) BOOL hasNumber;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;
/** Test to see if @c name has been set. */
@property(nonatomic, readwrite) BOOL hasName;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosContactDetails_Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@property(nonatomic, readwrite, copy, null_resettable) NSString *color;
/** Test to see if @c color has been set. */
@property(nonatomic, readwrite) BOOL hasColor;

@end

#pragma mark - KCSignalServiceProtosContactDetails_Avatar

typedef GPB_ENUM(KCSignalServiceProtosContactDetails_Avatar_FieldNumber) {
  KCSignalServiceProtosContactDetails_Avatar_FieldNumber_ContentType = 1,
  KCSignalServiceProtosContactDetails_Avatar_FieldNumber_Length = 2,
};

@interface KCSignalServiceProtosContactDetails_Avatar : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;
/** Test to see if @c contentType has been set. */
@property(nonatomic, readwrite) BOOL hasContentType;

@property(nonatomic, readwrite) uint32_t length;

@property(nonatomic, readwrite) BOOL hasLength;
@end

#pragma mark - KCSignalServiceProtosGroupDetails

typedef GPB_ENUM(KCSignalServiceProtosGroupDetails_FieldNumber) {
  KCSignalServiceProtosGroupDetails_FieldNumber_Id_p = 1,
  KCSignalServiceProtosGroupDetails_FieldNumber_Name = 2,
  KCSignalServiceProtosGroupDetails_FieldNumber_MembersArray = 3,
  KCSignalServiceProtosGroupDetails_FieldNumber_Avatar = 4,
  KCSignalServiceProtosGroupDetails_FieldNumber_Active = 5,
};

@interface KCSignalServiceProtosGroupDetails : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *id_p;
/** Test to see if @c id_p has been set. */
@property(nonatomic, readwrite) BOOL hasId_p;

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;
/** Test to see if @c name has been set. */
@property(nonatomic, readwrite) BOOL hasName;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *membersArray;
/** The number of items in @c membersArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger membersArray_Count;

@property(nonatomic, readwrite, strong, null_resettable) KCSignalServiceProtosGroupDetails_Avatar *avatar;
/** Test to see if @c avatar has been set. */
@property(nonatomic, readwrite) BOOL hasAvatar;

@property(nonatomic, readwrite) BOOL active;

@property(nonatomic, readwrite) BOOL hasActive;
@end

#pragma mark - KCSignalServiceProtosGroupDetails_Avatar

typedef GPB_ENUM(KCSignalServiceProtosGroupDetails_Avatar_FieldNumber) {
  KCSignalServiceProtosGroupDetails_Avatar_FieldNumber_ContentType = 1,
  KCSignalServiceProtosGroupDetails_Avatar_FieldNumber_Length = 2,
};

@interface KCSignalServiceProtosGroupDetails_Avatar : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *contentType;
/** Test to see if @c contentType has been set. */
@property(nonatomic, readwrite) BOOL hasContentType;

@property(nonatomic, readwrite) uint32_t length;

@property(nonatomic, readwrite) BOOL hasLength;
@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)