///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGOpenNoteSharedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `OpenNoteSharedDetails` struct.
///
/// Opened a shared Paper doc.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGOpenNoteSharedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `OpenNoteSharedDetails` struct.
///
@interface DBTEAMLOGOpenNoteSharedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGOpenNoteSharedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGOpenNoteSharedDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGOpenNoteSharedDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGOpenNoteSharedDetails *)instance;

///
/// Deserializes `DBTEAMLOGOpenNoteSharedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGOpenNoteSharedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGOpenNoteSharedDetails` object.
///
+ (DBTEAMLOGOpenNoteSharedDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
