//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AFSiriPhoneticContactNames : NSObject
{
    NSString *_givenName;
    NSString *_middleName;
    NSString *_familyName;
    NSString *_nickname;
    NSString *_organizationName;
    NSString *_languageCode;
}

@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
- (void).cxx_destruct;
- (id)spokenName;

@end

