//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding>
{
    BBBulletinUpdate *_bulletinUpdate;
    unsigned long long _transactionID;
}

+ (_Bool)supportsSecureCoding;
+ (id)transactionWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate; // @synthesize bulletinUpdate=_bulletinUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithBulletinUpdate:(id)arg1 transactionID:(unsigned long long)arg2;

@end

