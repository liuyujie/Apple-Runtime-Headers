//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSObject<OS_dispatch_queue>, NSString;

@interface DiagnosticExtensionController : NSObject
{
    NSDateFormatter *dateFormatter;
    NSString *destinationRootDirectory;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithDestinationDirectory:(id)arg1;

@end
