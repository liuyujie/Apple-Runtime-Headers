//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSString, NSURL;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate>
{
    id <UIDocumentInteractionControllerDelegate> _delegate;
    NSURL *_URL;
    NSString *_UTI;
    NSString *_name;
    NSArray *_icons;
    id _annotation;
    NSArray *_gestureRecognizers;
}

+ (id)interactionControllerWithURL:(id)arg1;
@property(readonly, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) id annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_UTI;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openDocumentWithDefaultApplication;
- (void)setSourceIsManaged:(_Bool)arg1;
- (_Bool)sourceIsManaged;
- (void)dismissMenuAnimated:(_Bool)arg1;
- (void)dismissPreviewAnimated:(_Bool)arg1;
- (_Bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOpenInMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)presentPreviewAnimated:(_Bool)arg1;
- (_Bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)presentOptionsMenuFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

