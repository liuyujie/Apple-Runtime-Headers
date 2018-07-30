//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface ILClassificationExtensionShellViewController : UIViewController
{
    _Bool _enableFinishOption;
    id <ILClassificationExtensionShellViewControllerDelegate> _delegate;
    UIViewController *_extensionViewController;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIViewController *extensionViewController; // @synthesize extensionViewController=_extensionViewController;
@property(nonatomic) _Bool enableFinishOption; // @synthesize enableFinishOption=_enableFinishOption;
@property(nonatomic) __weak id <ILClassificationExtensionShellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userDidCancel;
- (void)userDidFinish;
- (void)displayExtensionViewController:(id)arg1 forExtension:(id)arg2;
- (void)viewDidLoad;

@end
