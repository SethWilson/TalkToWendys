//
//  RootViewController.h
//  Untitled
//
//  Created by Seth Wilson on 11-01-27.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface RootViewController : UIViewController <NSFetchedResultsControllerDelegate, UITextFieldDelegate> {

	UITextField *_receiptNumber;
	UITextField *_receiptValue;
	UITextField *_emailAddress;
	UITextField *_peopleInParty;
	UITextField *_howOften;
	
	
@private
    NSFetchedResultsController *fetchedResultsController_;
    NSManagedObjectContext *managedObjectContext_;
	
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) IBOutlet UITextField *receiptNumber;
@property (nonatomic, retain) IBOutlet UITextField *receiptValue;
@property (nonatomic, retain) IBOutlet UITextField *emailAddress;
@property (nonatomic, retain) IBOutlet UITextField *peopleInParty;
@property (nonatomic, retain) IBOutlet UITextField *howOften;

@end
