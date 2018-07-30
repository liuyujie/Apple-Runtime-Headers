//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary;

@interface ILClassificationResponse : NSObject <NSSecureCoding>
{
    long long _action;
    NSDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToResponse:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithClassificationAction:(long long)arg1;

@end
