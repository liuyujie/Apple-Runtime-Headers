//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSNumber, NSString, NSURL;

@interface DMFInstallManagedBookRequest : DMFTaskRequest
{
    NSString *_originator;
    NSNumber *_iTunesStoreID;
    NSString *_persistentID;
    NSString *_author;
    NSString *_title;
    NSString *_version;
    NSURL *_URL;
    unsigned int _type;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

