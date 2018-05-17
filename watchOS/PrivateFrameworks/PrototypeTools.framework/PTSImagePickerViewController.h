//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PTSImageLoaderDelegate.h"
#import "UIAdaptivePresentationControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSString, PTSImageLoader, UIImagePickerController;

@interface PTSImagePickerViewController : UITableViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PTSImageLoaderDelegate, UIAdaptivePresentationControllerDelegate>
{
    UIImagePickerController *_photoLibraryPicker;
    NSMutableArray *_images;
    NSMutableArray *_filenames;
    PTSImageLoader *_imageLoader;
    _Bool _doneLoading;
    CDUnknownBlockType _completion;
    _Bool _includePhotoLibrary;
}

@property(nonatomic) _Bool includePhotoLibrary; // @synthesize includePhotoLibrary=_includePhotoLibrary;
- (void).cxx_destruct;
- (void)imageLoaderDidFinishLoadingImages:(id)arg1;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forFilename:(id)arg3;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithResourcePath:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
