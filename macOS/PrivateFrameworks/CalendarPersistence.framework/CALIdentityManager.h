//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALAddress, CalMeCard, NSArray, NSCache, NSObject<OS_dispatch_semaphore>, NSString;

@interface CALIdentityManager : NSObject
{
    NSArray *myMails;
    BOOL _myCardExists;
    CALAddress *me;
    NSString *myLikenessString;
    NSString *myCardID;
    NSCache *_urlIsMeMapping;
    CalMeCard *_calMeCard;
    NSObject<OS_dispatch_semaphore> *_agentMeCardSemaphore;
    NSArray *_myEmailsForUnitTests;
}

+ (id)defaultManager;
@property(retain) NSArray *myEmailsForUnitTests; // @synthesize myEmailsForUnitTests=_myEmailsForUnitTests;
- (void).cxx_destruct;
- (void)_clearCachedEmails;
- (void)meCardChanged;
- (void)resetCache:(id)arg1;
- (void)setMyEmail:(id)arg1;
- (id)defaultEmail;
- (BOOL)private_isOneOfMyEmails:(id)arg1;
- (BOOL)private_isOneOfMyEmailURLs:(id)arg1;
- (BOOL)private_hasMe;
- (id)private_localLikenessMeForEmails:(id)arg1;
- (id)private_localLikenessMe;
- (id)private_localEmailMe;
- (id)myEmails;
- (id)description;
- (id)init;

@end

