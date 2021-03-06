//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSDiagnosticManager;

@interface MSComposeAttachmentAnalyticController : NSObject
{
    int _totalDrawingsInsertedCount;
    MSDiagnosticManager *_diagnosticManager;
}

@property(retain, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
- (void).cxx_destruct;
- (void)_submitFinalDrawingInsertCount:(int)arg1 sentMessage:(_Bool)arg2;
- (void)abandonMessageWithActualDrawingInsertCount:(int)arg1;
- (void)sendMessageWithActualDrawingInsertCount:(int)arg1;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(int)arg2;

@end

