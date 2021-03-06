//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSFormAutoFillNode.h"

@class NSString, WKWebProcessPlugInNodeHandle;

__attribute__((visibility("hidden")))
@interface SFFormAutoFillNode : NSObject <WBSFormAutoFillNode>
{
    WKWebProcessPlugInNodeHandle *_nodeHandle;
}

+ (id)autoFillNodeWithNodeHandle:(id)arg1;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *nodeHandle; // @synthesize nodeHandle=_nodeHandle;
- (void).cxx_destruct;
- (_Bool)isHTMLTextAreaElementUserEdited;
- (_Bool)isHTMLInputElementUserEdited;
- (void)setHTMLInputElementAutofilled:(_Bool)arg1;
- (struct CGRect)elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (id)initWithNodeHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

