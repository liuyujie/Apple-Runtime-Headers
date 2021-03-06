//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding>
{
    long long _result;
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(long long)arg1 data:(id)arg2;

@end

