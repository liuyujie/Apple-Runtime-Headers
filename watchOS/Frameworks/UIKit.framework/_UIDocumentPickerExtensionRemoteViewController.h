//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIDocumentPickerRemoteViewController.h>

#import "_UIDocumentPickerViewControllerExtensionHost.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerExtensionRemoteViewController : _UIDocumentPickerRemoteViewController <_UIDocumentPickerViewControllerExtensionHost>
{
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void)_doneButtonPressed;
- (void)_displayLocationMenu:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
