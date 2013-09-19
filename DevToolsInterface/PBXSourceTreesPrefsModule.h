/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSMutableArray, PBXExtendedTableView;

@interface PBXSourceTreesPrefsModule : PBXPreferencesPaneModule
{
    NSMutableArray *_sourceTrees;
    long long _rowBeingEdited;
    long long _columnBeingEdited;
    PBXExtendedTableView *_sourceTreesTable;
    NSButton *_addSourceTreeButton;
    NSButton *_deleteSourceTreeButton;
}

- (void)deleteSourceTree:(id)arg1;
- (void)addSourceTree:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)tableView:(id)arg1 willAbortEditingColumn:(long long)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willEndEditingColumn:(long long)arg2 row:(long long)arg3 textMovement:(unsigned long long)arg4;
- (void)tableView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)deleteRows:(id)arg1;
- (void)createRow:(long long)arg1;
- (void)saveChanges;
- (void)initializeFromDefaults;
- (void)update;
- (void)viewDidLoad;
- (struct CGSize)minModuleSize;
- (void)dealloc;

@end
