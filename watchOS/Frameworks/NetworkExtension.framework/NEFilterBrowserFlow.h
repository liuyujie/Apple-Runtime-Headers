//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEFilterFlow.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSURL, NSURLRequest, NSURLResponse;

@interface NEFilterBrowserFlow : NEFilterFlow <NSSecureCoding, NSCopying>
{
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURL *_parentURL;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSURL *parentURL; // @synthesize parentURL=_parentURL;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:(id)arg1 parentURL:(id)arg2 sourceAppIdentifier:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
