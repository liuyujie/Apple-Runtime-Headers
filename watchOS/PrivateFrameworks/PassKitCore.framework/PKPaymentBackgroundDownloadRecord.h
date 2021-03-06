//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>
{
    int _taskType;
    int _retryCount;
}

+ (id)taskWithType:(int)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int taskType; // @synthesize taskType=_taskType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

