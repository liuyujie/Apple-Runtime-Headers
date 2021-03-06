//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "SiriUIViewController.h"

@class AceObject, NSString, SAUISnippet;

__attribute__((visibility("hidden")))
@interface SiriUIBaseSnippetViewController : NSViewController <SiriUIViewController>
{
    AceObject *aceObject;
    id <SiriUIAceObjectViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIAceObjectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AceObject *aceObject; // @synthesize aceObject;
- (void).cxx_destruct;
- (double)desiredHeight;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
@property(retain, nonatomic) SAUISnippet *snippet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

