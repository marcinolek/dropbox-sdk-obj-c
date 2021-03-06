///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedContentRequestAccessDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentRequestAccessDetails` struct.
///
/// Requested to be on the membership of a shared file or folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentRequestAccessDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset index.
@property (nonatomic, readonly) NSNumber *targetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy, nullable) NSString *originalFolderName;

/// Shared content link.
@property (nonatomic, readonly, copy, nullable) NSString *sharedContentLink;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetIndex Target asset index.
/// @param originalFolderName Original shared folder name.
/// @param sharedContentLink Shared content link.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex
                 originalFolderName:(nullable NSString *)originalFolderName
                  sharedContentLink:(nullable NSString *)sharedContentLink;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetIndex Target asset index.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetIndex:(NSNumber *)targetIndex;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentRequestAccessDetails` struct.
///
@interface DBTEAMLOGSharedContentRequestAccessDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentRequestAccessDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentRequestAccessDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRequestAccessDetails` API object.
///
+ (NSDictionary *)serialize:(DBTEAMLOGSharedContentRequestAccessDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentRequestAccessDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentRequestAccessDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharedContentRequestAccessDetails`
/// object.
///
+ (DBTEAMLOGSharedContentRequestAccessDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
