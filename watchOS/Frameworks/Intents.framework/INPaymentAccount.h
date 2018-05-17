//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INBalanceAmount, INSpeakableString, NSString;

@interface INPaymentAccount : NSObject <NSCopying, NSSecureCoding>
{
    INSpeakableString *_nickname;
    NSString *_accountNumber;
    int _accountType;
    INSpeakableString *_organizationName;
    INBalanceAmount *_balance;
    INBalanceAmount *_secondaryBalance;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) INBalanceAmount *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property(readonly, copy, nonatomic) INBalanceAmount *balance; // @synthesize balance=_balance;
@property(readonly, copy, nonatomic) INSpeakableString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(readonly, copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property(readonly, copy, nonatomic) INSpeakableString *nickname; // @synthesize nickname=_nickname;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(int)arg3 organizationName:(id)arg4;
- (id)initWithNickname:(id)arg1 number:(id)arg2 accountType:(int)arg3 organizationName:(id)arg4 balance:(id)arg5 secondaryBalance:(id)arg6;

@end
