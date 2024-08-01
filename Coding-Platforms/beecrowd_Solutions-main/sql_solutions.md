# SQL_Solutions

## Index
1. [2602 Basic Select](#2602-Basic-Select)
2. [2603 Customer Address](#2603-Customer-Address)
3. [2604 Under 10 or Greater Than 100](#2604-Under-10-or-Greater-Than-100)
4. [2605 Executive Representatives](#2605-Executive-Representatives)
5. [2606 Categories](#2606-Categories)
6. [2607 Providers' City in Alphabetical Order](#2607-Providers'-City-in-Alphabetical-Order)
7. [2608 Higher and Lower Price](#2608-Higher-and-Lower-Price)
8. [2609 Products by Categories](#2609-Products-by-Categories)
9. [2610 Average Value of Products](#2610-Average-Value-of-Products)
10. [2611	Action Movies](#2611-Action-Movies)
11. [2613 Cheap Movies](#2613-Cheap-Movies)
12. [2614	September Rentals](#2614-September-Rentals)
13. [2615 Expanding the Business](#2615-Expanding-the-Business)
14. [2616	No Rental](#2616-No-Rental)
15. [2617	Provider Ajax SA](#2617-Provider-Ajax-SA)
16. [2618	Imported Products](#2618-Imported-Products)
17. [2619	Super Luxury](#2619-Super-Luxury)
18. [2620	Orders in First Half](#2620-Orders-in-First-Half)
19. [2621	Amounts Between 10 and 20](#2621-Amounts-Between-10-and-20)
20. [2622 Legal Person](#2622-Legal-Person)
21. [2623 Categories with Various Products](#2623-Categories-with-Various-Products)
22. [2624 Number of Cities per Customers](#2624-Number-of-Cities-per-Customers)
23. [2738 Contest](#2738-Contest)



## 2602 Basic Select

Your company is doing a survey of how many customers are registered in the states, however, lacked to raise the data of the state of the 'Rio Grande do Sul'.

Then, you must show the names of all customers whose state is 'RS'.
```sql
SELECT name FROM customers
WHERE state = 'RS'
```

## 2603 Customer Address
The company will make an event celebrating the 20th anniversary of the market, and for that we will make a great celebration in the city of Porto Alegre. We also invite all our customers who are enrolled in this city.

Your job is in having the names and addresses of customers who live in 'Porto Alegre', to deliver the invitations personally.
```sql
SELECT name, street FROM customers
WHERE city = 'Porto Alegre'
```
## 2604	Under 10 or Greater Than 100
The financial sector of the company needs a report that shows the ID and the name of the products whose price is less than 10 or greater than 100.

```sql
SELECT id, name FROM products
WHERE price<10 OR price>100
```

## 2605	Executive Representatives
The financial sector needs a report on the providers of the products we sell. The reports include all categories, but for some reason, providers of products whose category is the executive, are not in the report.

Your job is to return the names of the products and providers whose category ID is 6.

```sql
SELECT products.name, providers.name FROM products
JOIN providers ON providers.id = id_providers
WHERE id_categories = 6
```
## 2606 Categories
When the data were migrated to the database, there was a small misunderstanding on the DBA. 

Your boss needs you to select the ID and the name of the products, whose categorie name start with 'super'.
```sql
SELECT products.id, products.name FROM products
JOIN categories ON categories.id = products.id_categories
WHERE (SELECT categories.name LIKE 'super%')
```
## 2607 Providers' City in Alphabetical Order
Every month the company asks for a report from the cities that providers are registered. So, do a query that returns all the cities of the providers, but in alphabetical order.

OBS: You must not show repeated cities
```sql
SELECT DISTINCT city FROM providers
ORDER BY city
```

## 2608 Higher and Lower Price
The financial sector of our company, wants to know the smaller and higher values of the products, which we sell.

For this you must display only the highest and lowest price of the products table.
```sql
SELECT MAX(price), MIN(price) FROM products
```
## 2609 Products by Categories
As usual the sales industry is doing an analysis of how many products we have in stock, and you can help them.

Then your job will display the name and amount of products of each category.
```sql
SELECT categories.name, sum(products.amount) FROM categories
JOIN products ON  categories.id = id_categories
group by categories.name
```

## 2610 Average Value of Products

In the company that you work is being done a survey on the values of the products that are marketed.

To help the industry that is doing this survey you should calculate and display the average value of the price of the products.

OBS: Show the value with two numbers after the period.
```sql
SELECT ROUND(SUM(price)/count(name),2) AS price FROM products
```

## 2611 Action Movies
A video store contractor hired her services to catalog her movies. They need you to select the code and the name of the movies whose description of the genre is 'Action'.

```sql
SELECT movies.id, movies.name FROM movies
JOIN genres ON genres.id= id_genres
WHERE description = 'Action'
```

## 2613 Cheap Movies
In the past the studio has made an event where several movies were on sale, we want to know what movies these were.

Your job to help us is to select the ID and name of movies whose price is less than 2.00.

```sql
SELECT movies.id, movies.name FROM movies
JOIN prices ON prices.id = id_prices
WHERE prices.value < 2.00
```

## 2614 September Rentals
The video store is making its semi-annual report and needs your help. All you have to do is select the name of the clients and the date of rental, from the rentals made in September 2016.

```sql
SELECT customers.name, rentals_date FROM customers
JOIN rentals ON id_customers = customers.id
WHERE rentals.rentals_date >= '2016-09-01' 
AND rentals.rentals_date <= '2016-09-30'
```

## 2615 Expanding the Business
The video store company has the objectives of creating several franchises spread throughout Brazil. For this we want to know in which cities our customers live.

For you to help us select the name of all the cities where the rental company has clients. But please do not repeat the name of the city.

```sql
SELECT DISTINCT city FROM customers
```

## 2616 No Rental
The video store company intends to do a promotion for customers who have not yet done any rental.

Your job is to deliver us the ID and the name of the customers who have not done any rental. Sort the output by ID.

```sql
SELECT customers.id, customers.name FROM customers
WHERE id NOT IN (select id_customers from locations)
```

## 2617 Provider Ajax SA
The financial sector has encountered some problems in the delivery of one of our providers, the delivery of the products does not match the invoice.

Your job is to display the name of the products and the name of the provider, for the products supplied by the provider 'Ajax SA'.

```sql
SELECT products.name, providers.name FROM products
JOIN providers ON providers.id = id_providers
WHERE providers.name = 'Ajax SA'
```

## 2618 Imported Products
Our company's import sector needs a report on the import of products from our Sansul providers.

Your task is to display the name of the products, the name of the supplier and the name of the category, for the products supplied by the supplier 'Sansul SA' and whose category name is 'Imported'.
```sql
SELECT products.name, providers.name, categories.name FROM products
JOIN providers ON id_providers = providers.id
JOIN categories ON id_categories = categories.id
WHERE providers.name = 'Sansul SA' AND categories.name = 'Imported'
```

## 2619 Super Luxury
Our company is looking to make a new contract for the supply of new super luxury products, and for this we need some data of our products.

Your job is to display the name of the products, the name of the providers and the price, for the products whose price is greater than 1000 and its category is' Super Luxury.

```sql
SELECT products.name, providers.name, products.price FROM products
JOIN providers ON providers.id = id_providers
JOIN categories ON categories.id = id_categories
WHERE products.price>1000 AND categories.name = 'Super Luxury'
```

## 2620 Orders in First Half
The company's financial audit is asking us for a report for the first half of 2016. Then display the customers name and order number for customers who placed orders in the first half of 2016.

```sql
SELECT customers.name, orders.id FROM customers
JOIN orders ON customers.id = id_customers
WHERE orders_date>='2016-01-01' AND orders_date<='2016-06-30'
```

## 2621 Amounts Between 10 and 20
When it comes to delivering the report on how many products the company has in stock, a part of the report has become corrupted, so the stock keeper asked for help, he wants you to display the following data for him.

Display the name of products whose amount are between 10 and 20 and whose name of the supplier starts with the letter 'P'.

```sql
SELECT products.name FROM products
JOIN providers ON providers.id = id_providers
WHERE products.amount BETWEEN 10 AND 20 AND providers.name LIKE 'P%'
```

## 2622 Legal Person
The sales industry wants to make a promotion for all clients that are legal entities. For this you must display the name of the customers that are legal entity.
```sql
SELECT customers.name FROM customers
JOIN legal_person ON id_customers = customers.id
```

## 2623 Categories with Various Products
The sales industry needs a report to know what products are left in stock.

To help the sales industry, display the product name and category name for products whose amount is greater than 100 and the category ID is 1,2,3,6 or 9. Show the results in ascendent order by category ID.

```sql
SELECT products.name, categories.name FROM products
JOIN categories ON categories.id = id_categories
WHERE products.amount>100 AND id_categories IN (1, 2, 3, 6, 9)
```

## 2624 Number of Cities per Customers
The company board asked you for a simple report on how many cities the company has already reached.

To do this you must display the number of distinct cities in the customers table.
```sql
SELECT COUNT(distinct city) FROM customers
```

## 2738 Contest
The Mars Technology University has Open Positions for researchers. However, the computer responsible for processing the candidates' data is broken. You must present the candidate list, containing the name and final score (with two decimal places of precision) of each candidate. Remember to show the list ordered by score (highest first).
```sql
SELECT name, ROUND(((math*2)+(specific*3)+ (project_plan*5))/10,2) AS avg  FROM candidate
JOIN score ON candidate.id = candidate_id
ORDER BY avg desc
```
