//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSURL;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSData *_scope;
    NSData *_promiseScope;
    NSURL *_promiseURL;
}

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithURL:(id)arg1 extensionClass:(const char *)arg2 error:(id *)arg3;
+ (id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 error:(id *)arg3;
+ (id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2;
+ (id)wrapperWithURL:(id)arg1;
@property(retain) NSURL *promiseURL; // @synthesize promiseURL=_promiseURL;
@property(retain) NSData *promiseScope; // @synthesize promiseScope=_promiseScope;
@property(retain) NSData *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

