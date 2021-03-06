//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_clientName;
    NSString *_codeSigningIdentity;
    int _pid;
    CDStruct_4c969caf _auditToken;
}

@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, copy, nonatomic) NSString *codeSigningIdentity; // @synthesize codeSigningIdentity=_codeSigningIdentity;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end

