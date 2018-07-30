//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFDialog.h>

@class WebUIAlert;

__attribute__((visibility("hidden")))
@interface SFWebUIDialog : _SFDialog
{
    int _finalAction;
    CDUnknownBlockType _completionHandler;
    _Bool _shouldIgnoreGlobalModalUIDisplayPolicy;
    WebUIAlert *_alert;
}

@property(readonly, nonatomic) WebUIAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newViewControllerRepresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)presentationStyle;
- (_Bool)shouldIgnoreGlobalModalUIDisplayPolicy;
- (id)initWithAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
