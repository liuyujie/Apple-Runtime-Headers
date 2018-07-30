//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding>
{
    long long _pnrMechanism;
    NSString *_svcCenterAddr;
    NSString *_destAddr;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *destAddr; // @synthesize destAddr=_destAddr;
@property(retain, nonatomic) NSString *svcCenterAddr; // @synthesize svcCenterAddr=_svcCenterAddr;
@property(nonatomic) long long pnrMechanism; // @synthesize pnrMechanism=_pnrMechanism;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTPNRDataType:(id)arg1;
- (id)init;

@end
