//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INSpeakableString;

@protocol INSearchForAccountsIntentExport <NSObject, JSExport>
@property(nonatomic) int requestedBalanceType;
@property(copy, nonatomic) INSpeakableString *organizationName;
@property(nonatomic) int accountType;
@property(copy, nonatomic) INSpeakableString *accountNickname;
- (id)init;
@end
