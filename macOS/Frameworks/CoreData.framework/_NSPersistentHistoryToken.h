//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSPersistentHistoryToken.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryToken : NSPersistentHistoryToken
{
    NSDictionary *_storeTokens;
}

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)storeTokens;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransactionNumber:(id)arg1 andStoreID:(id)arg2;

@end
