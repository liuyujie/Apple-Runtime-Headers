//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIMDebugLogger, CIMIssueReporterCandidateState, NSArray, NSString, NSURL;

@interface CIMIssueReporterRadarInfoController : NSObject
{
    NSString *_currentOSBuildVersion;
    NSURL *_temporaryPlistURL;
    CIMIssueReporterCandidateState *_candidateState;
    NSArray *_userWordKeyPairs;
    CIMDebugLogger *_debugLogger;
}

@property(readonly, retain) CIMDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain) NSArray *userWordKeyPairs; // @synthesize userWordKeyPairs=_userWordKeyPairs;
@property(readonly, retain) CIMIssueReporterCandidateState *candidateState; // @synthesize candidateState=_candidateState;
- (void).cxx_destruct;
@property(readonly, copy) NSURL *temporaryPlistURL; // @synthesize temporaryPlistURL=_temporaryPlistURL;
- (void)createAdditionalDebugInfoPlist;
- (id)inputModeStringForMecabraInputMethodType:(int)arg1;
@property(readonly, copy) NSString *inputMode;
@property(readonly, copy) NSString *currentOSBuildVersion; // @synthesize currentOSBuildVersion=_currentOSBuildVersion;
- (id)initWithDebugLogger:(id)arg1 candidateState:(id)arg2;

@end
